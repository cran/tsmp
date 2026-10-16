## ----setup, include = FALSE---------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>"
)

## ----Figure 1, echo=FALSE, fig.cap="Figure 1: Distance Matrix and its Matrix Profile.", out.width=350, out.height=350, message=FALSE, warning=FALSE----
knitr::include_graphics("mp_1.png")

## ----eval=FALSE, include=TRUE-------------------------------------------------
# set.seed(2018)
# data <- cumsum(sample(c(-1, 1), 40000, TRUE))

## ----table1, echo=FALSE, message=FALSE, warnings=FALSE, results='asis'--------
tabl <- "
|  | Elapsed Time^[Results powered by the high-performance 'matrixprofiler' C++ engine] | Data size | Window size | Threads |
|-----------|:------------:|:---------:|:-----------:|:-------:|
| `mpx` (parallel) | 0.32s | 40000 | 1000 | 8 |
| `mpx` | 1.02s | 40000 | 1000 | 1 |
| `stomp_par()` | 2.45s | 40000 | 1000 | 8 |
| `scrimp()` | 13.10s | 40000 | 1000 | 1 |
| `stamp_par()` | 27.43s | 40000 | 1000 | 8 |
| `stomp()` | 62.91s | 40000 | 1000 | 1 |
| `stamp()` | 122.63s | 40000 | 1000 | 1 |
"
cat(tabl) # output the table in a format good for HTML/PDF/docx conversion

