% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/datadoc.R
\docType{data}
\name{swissbanknotes}
\alias{swissbanknotes}
\title{Swiss banknote data}
\format{
A data frame with 200 rows and 7 variables
The variables are as follows:

 \itemize{
     \item \code{length}: Length of bill, mm
     \item \code{left}: Width of left edge, mm
     \item \code{right}: Width of right edge, mm
     \item \code{bottom}: Bottom margin width, mm
     \item \code{top}: Top margin width, mm
     \item \code{diagonal}: Length of image diagonal, mm
     \item \code{class}: 1 = genuine, 2 = counterfeit
 }
}
\source{
Flury, B. and Riedwyl, H. (1988). \emph{Multivariate Statistics: A practical approach.} London: Chapman & Hall.
}
\usage{
data(swissbanknotes)
}
\description{
Six variables measured on 100 genuine and 100 counterfeit
 old (printed before the second world war) Swiss 1000-franc bank notes
 (Flury and Riedwyl, 1988).
}
\examples{
 data(swissbanknotes)
 head(swissbanknotes)

}
\references{
Weisberg, S. (2005).  \emph{Applied Linear Regression}, 3rd edition. New York: Wiley, Problem 12.5.
}
\keyword{datasets}
