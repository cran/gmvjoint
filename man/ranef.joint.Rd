% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/rfixef.R
\name{ranef.joint}
\alias{ranef.joint}
\title{Extract random effects from a \code{joint} object.}
\usage{
\method{ranef}{joint}(object, Var = FALSE, ...)
}
\arguments{
\item{object}{a joint model fit by the \code{joint} function.}

\item{Var}{logical, should the estimated variance of the random effects at \eqn{\hat{\Omega}}
be returned? Defaults to \code{Var=FALSE}.}

\item{...}{additional arguments (none used).}
}
\value{
A \code{matrix} containing required random effects effects. If \code{Var=TRUE},
instead a list is returned with first element the \code{matrix} of random effects and second a 
\code{matrix} of the variances \eqn{\hat{\Sigma}}. Note that these are \emph{posterior modes}
of the random effects. Conditional distribution can be found by \code{\link{cond.ranefs}}.
}
\description{
Return the random effects \eqn{\hat{\boldsymbol{b}}} which maximises the complete
data log-likelihood at the MLEs \eqn{\hat{\Omega}}.
}
\examples{
\donttest{
# Univariate fit on PBC data -----------------------------------------
data(PBC)

# Subset data and remove NAs
PBC <- subset(PBC, select = c('id', 'survtime', 'status', 'drug', 'time',
                              'albumin'))
PBC <- na.omit(PBC) 

# Specify univariate fit
long.formulas <- list(
  albumin ~ time*drug + (1 + time|id)
)
surv.formula <- Surv(survtime, status) ~ drug

fit <- joint(long.formulas, surv.formula, PBC, family = list('gaussian'))
b <- ranef(fit, FALSE)
}
}
\seealso{
\code{\link{fixef.joint}} \code{\link{cond.ranefs}}
}
\author{
James Murray (\email{j.murray7@ncl.ac.uk}).
}
