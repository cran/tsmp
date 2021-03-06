% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/mpx.R
\name{mpx}
\alias{mpx}
\title{Fast implementation of MP and MPI for internal purposes, without FFT}
\usage{
mpx(
  data,
  window_size,
  query = NULL,
  idx = TRUE,
  dist = c("euclidean", "pearson"),
  n_workers = 1
)
}
\arguments{
\item{data}{a \code{matrix} or a \code{vector}. The time series to analyze.}

\item{window_size}{window size}

\item{query}{query}

\item{idx}{compute the profile indexes?}

\item{dist}{distance measure, Euclidean or Pearson?}

\item{n_workers}{threads for multi-threading}
}
\value{
Returns MP and MPI
}
\description{
Fast implementation of MP and MPI for internal purposes, without FFT
}
\examples{
\donttest{
mp <- mpx(mp_toy_data$data[1:200, 1], window_size = 30)
}
}
