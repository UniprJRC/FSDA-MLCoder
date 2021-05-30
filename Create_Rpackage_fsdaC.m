% This file
% 1) navigates to the documents folder of your operating system
% 2) downloads the content of subfolder R-package of github repo
% https://github.com/UniprJRC/FSDA-MATLAB_Coder
% inside (documents folder)/R-package
% Note that if folder R-package inside (documents folder) already exists
% it is deleted before cloning the github folder
% 3) calls R from the command line and creates inside (documents folder) file fsdac_X.X-X.tar.gz
% (where X.X-X are the 3 numbers identifying version of fsdac (i.e. 0.9-1).
% Note that the version of fsdaC is automatically read from second line of
% file named DESCRIPTION
% 4) displays the string to execute in R to install package fsdac
%

%% Get and store current path and Navigate to folder documents
pathCurrentFolder=pwd;

if ispc
    mydocpath = fullfile(getenv('USERPROFILE'), 'Documents');
else
    mydocpath='$home/Documents';
end
cd(mydocpath)

% If folder R-package already exists inside (documents) it is deleted (with
% the subfolders)
if exist('R-package','dir')==7
    rmdir 'R-package' s
end

%% retrieve just the content of subfolder R-package
% of github repo https://github.com/UniprJRC/FSDA-MATLAB_Coder
!git svn clone https://github.com/UniprJRC/FSDA-MATLAB_Coder/trunk/R-package

% Rversion is the charater which identifies the R version you are using
% To get R version inside R type
% paste(R.Version()[c("major", "minor")], collapse = ".")
Rversion='4.1.0';

% Read version of fsdaC from file named "DESCRIPTION" inside subfolder R-package
% Second row of file name DESCTIPRION contains the number whihc identifies
% the version of fsdac
fid = fopen(['R-package' filesep' 'DESCRIPTION']); % open file
fgetl(fid);
version=fgetl(fid); % get version from second line of the file
fsdaCversion=strtrim(version(9:end));
fclose(fid);
disp(['you are building fsdaC number: ' version]) 

% run R CMD build
% This is the windows path. Could you please add the path for other
% operating systems?
str=['"c:\Program Files\R\R-' Rversion '\bin\x64\R" CMD build fsdac --no-multiarch"'];
a=system(str);

% The output of system(str) is file (mydocpath)\fsdac_X.X-X.tar.gz

% Now open R and from the prompt of R (or Rstudio) execute
disp('string to type to install the package in R (Rstudio)')
disp('----------------')
disp(['install.packages("fsdac_'  num2str(fsdaCversion) '.tar.gz", repos = NULL, type = "source")'])

% Remark: it is assumed that in R the "R Utils package" is installed')

% navigate to the original folder before switching to documents
cd(pathCurrentFolder);
