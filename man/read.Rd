% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/serialize.R
\name{read}
\alias{read}
\title{Read TSMP object from JSON file.}
\usage{
read(x, ...)
}
\arguments{
\item{x}{a \code{character} string with the input filename.}

\item{...}{other arguments to be passed forward.}
}
\description{
Read TSMP object from JSON file.
}
\examples{


result <- compute(mp_toy_data$data[, 1], 80)
\donttest{
tempfile <- file.path(tempdir(), "output.json")
write(result, file = tempfile)
result <- read(tempfile)
}
}
