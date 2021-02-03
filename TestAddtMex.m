%% addt with optional arguments.
% Excluding one observation from the sample; compare the added variable plot
% based on all units with that which excludes unit 43.

rng('default')
rng(100)
n=50;

y=randn(n,1)+10;
X=randn(n,3);
w=randn(n,1);



%la=[];
%  uncomment the following line to set lambda parameter for data
%  transformation
la=1.1;


% parameters not used by C Coder
defScalar=1;
defCell ={'1'};

[out]=addt_mex(y, X, w, 'intercept', 1, 'la', la,  'nocheck', 0, ...
    'FontSize', defScalar, 'plots',defScalar,  'SizeAxesNum',defScalar, ...
    'textlab', defCell, 'units', defScalar);

[out1]=addt(y, X, w, 'plots', 0, 'intercept', 1, 'la', la, 'nocheck', 0, ...
    'FontSize', 12, 'SizeAxesNum', 10);


disp(out)
disp(out1)