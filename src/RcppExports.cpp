// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// std_rcpp
double std_rcpp(const NumericVector data, const bool na_rm);
RcppExport SEXP _tsmp_std_rcpp(SEXP dataSEXP, SEXP na_rmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const bool >::type na_rm(na_rmSEXP);
    rcpp_result_gen = Rcpp::wrap(std_rcpp(data, na_rm));
    return rcpp_result_gen;
END_RCPP
}
// list_to_matrix
NumericMatrix list_to_matrix(const List x);
RcppExport SEXP _tsmp_list_to_matrix(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(list_to_matrix(x));
    return rcpp_result_gen;
END_RCPP
}
// diff_lag
NumericVector diff_lag(const NumericVector x, const uint32_t lag);
RcppExport SEXP _tsmp_diff_lag(SEXP xSEXP, SEXP lagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type lag(lagSEXP);
    rcpp_result_gen = Rcpp::wrap(diff_lag(x, lag));
    return rcpp_result_gen;
END_RCPP
}
// diff2_lag
NumericVector diff2_lag(const NumericVector x, const uint32_t lag, const double v);
RcppExport SEXP _tsmp_diff2_lag(SEXP xSEXP, SEXP lagSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type lag(lagSEXP);
    Rcpp::traits::input_parameter< const double >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(diff2_lag(x, lag, v));
    return rcpp_result_gen;
END_RCPP
}
// fast_movsd_rcpp
NumericVector fast_movsd_rcpp(const NumericVector data, const uint32_t window_size);
RcppExport SEXP _tsmp_fast_movsd_rcpp(SEXP dataSEXP, SEXP window_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type window_size(window_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_movsd_rcpp(data, window_size));
    return rcpp_result_gen;
END_RCPP
}
// fast_avg_sd_rcpp
List fast_avg_sd_rcpp(const NumericVector data, const uint32_t window_size);
RcppExport SEXP _tsmp_fast_avg_sd_rcpp(SEXP dataSEXP, SEXP window_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const uint32_t >::type window_size(window_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_avg_sd_rcpp(data, window_size));
    return rcpp_result_gen;
END_RCPP
}
// mode_rcpp
int32_t mode_rcpp(const NumericVector x);
RcppExport SEXP _tsmp_mode_rcpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(mode_rcpp(x));
    return rcpp_result_gen;
END_RCPP
}
// znorm_rcpp
NumericVector znorm_rcpp(const NumericVector data);
RcppExport SEXP _tsmp_znorm_rcpp(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(znorm_rcpp(data));
    return rcpp_result_gen;
END_RCPP
}
// binary_split_rcpp
NumericVector binary_split_rcpp(const uint32_t n);
RcppExport SEXP _tsmp_binary_split_rcpp(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const uint32_t >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(binary_split_rcpp(n));
    return rcpp_result_gen;
END_RCPP
}
// inner_product
double inner_product(NumericVector a, NumericVector b);
RcppExport SEXP _tsmp_inner_product(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(inner_product(a, b));
    return rcpp_result_gen;
END_RCPP
}
// sum_of_squares
double sum_of_squares(NumericVector a);
RcppExport SEXP _tsmp_sum_of_squares(SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(sum_of_squares(a));
    return rcpp_result_gen;
END_RCPP
}
// mpx_rcpp
List mpx_rcpp(NumericVector a, uint16_t w, uint16_t minlag, bool idxs, bool euclidean);
RcppExport SEXP _tsmp_mpx_rcpp(SEXP aSEXP, SEXP wSEXP, SEXP minlagSEXP, SEXP idxsSEXP, SEXP euclideanSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< uint16_t >::type w(wSEXP);
    Rcpp::traits::input_parameter< uint16_t >::type minlag(minlagSEXP);
    Rcpp::traits::input_parameter< bool >::type idxs(idxsSEXP);
    Rcpp::traits::input_parameter< bool >::type euclidean(euclideanSEXP);
    rcpp_result_gen = Rcpp::wrap(mpx_rcpp(a, w, minlag, idxs, euclidean));
    return rcpp_result_gen;
END_RCPP
}
// mpxab_rcpp
List mpxab_rcpp(NumericVector a, NumericVector b, uint16_t w, bool idxs, bool euclidean);
RcppExport SEXP _tsmp_mpxab_rcpp(SEXP aSEXP, SEXP bSEXP, SEXP wSEXP, SEXP idxsSEXP, SEXP euclideanSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< uint16_t >::type w(wSEXP);
    Rcpp::traits::input_parameter< bool >::type idxs(idxsSEXP);
    Rcpp::traits::input_parameter< bool >::type euclidean(euclideanSEXP);
    rcpp_result_gen = Rcpp::wrap(mpxab_rcpp(a, b, w, idxs, euclidean));
    return rcpp_result_gen;
END_RCPP
}
// mpx_rcpp_parallel
List mpx_rcpp_parallel(NumericVector a, uint16_t w, uint16_t minlag, bool idxs, bool euclidean);
RcppExport SEXP _tsmp_mpx_rcpp_parallel(SEXP aSEXP, SEXP wSEXP, SEXP minlagSEXP, SEXP idxsSEXP, SEXP euclideanSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< uint16_t >::type w(wSEXP);
    Rcpp::traits::input_parameter< uint16_t >::type minlag(minlagSEXP);
    Rcpp::traits::input_parameter< bool >::type idxs(idxsSEXP);
    Rcpp::traits::input_parameter< bool >::type euclidean(euclideanSEXP);
    rcpp_result_gen = Rcpp::wrap(mpx_rcpp_parallel(a, w, minlag, idxs, euclidean));
    return rcpp_result_gen;
END_RCPP
}
// mpxab_rcpp_parallel
List mpxab_rcpp_parallel(NumericVector a, NumericVector b, uint16_t w, bool idxs, bool euclidean);
RcppExport SEXP _tsmp_mpxab_rcpp_parallel(SEXP aSEXP, SEXP bSEXP, SEXP wSEXP, SEXP idxsSEXP, SEXP euclideanSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< uint16_t >::type w(wSEXP);
    Rcpp::traits::input_parameter< bool >::type idxs(idxsSEXP);
    Rcpp::traits::input_parameter< bool >::type euclidean(euclideanSEXP);
    rcpp_result_gen = Rcpp::wrap(mpxab_rcpp_parallel(a, b, w, idxs, euclidean));
    return rcpp_result_gen;
END_RCPP
}
// movmin
NumericVector movmin(NumericVector data, uint32_t window_size);
RcppExport SEXP _tsmp_movmin(SEXP dataSEXP, SEXP window_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type window_size(window_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(movmin(data, window_size));
    return rcpp_result_gen;
END_RCPP
}
// movmax
NumericVector movmax(NumericVector data, uint32_t window_size);
RcppExport SEXP _tsmp_movmax(SEXP dataSEXP, SEXP window_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type data(dataSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type window_size(window_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(movmax(data, window_size));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_tsmp_std_rcpp", (DL_FUNC) &_tsmp_std_rcpp, 2},
    {"_tsmp_list_to_matrix", (DL_FUNC) &_tsmp_list_to_matrix, 1},
    {"_tsmp_diff_lag", (DL_FUNC) &_tsmp_diff_lag, 2},
    {"_tsmp_diff2_lag", (DL_FUNC) &_tsmp_diff2_lag, 3},
    {"_tsmp_fast_movsd_rcpp", (DL_FUNC) &_tsmp_fast_movsd_rcpp, 2},
    {"_tsmp_fast_avg_sd_rcpp", (DL_FUNC) &_tsmp_fast_avg_sd_rcpp, 2},
    {"_tsmp_mode_rcpp", (DL_FUNC) &_tsmp_mode_rcpp, 1},
    {"_tsmp_znorm_rcpp", (DL_FUNC) &_tsmp_znorm_rcpp, 1},
    {"_tsmp_binary_split_rcpp", (DL_FUNC) &_tsmp_binary_split_rcpp, 1},
    {"_tsmp_inner_product", (DL_FUNC) &_tsmp_inner_product, 2},
    {"_tsmp_sum_of_squares", (DL_FUNC) &_tsmp_sum_of_squares, 1},
    {"_tsmp_mpx_rcpp", (DL_FUNC) &_tsmp_mpx_rcpp, 5},
    {"_tsmp_mpxab_rcpp", (DL_FUNC) &_tsmp_mpxab_rcpp, 5},
    {"_tsmp_mpx_rcpp_parallel", (DL_FUNC) &_tsmp_mpx_rcpp_parallel, 5},
    {"_tsmp_mpxab_rcpp_parallel", (DL_FUNC) &_tsmp_mpxab_rcpp_parallel, 5},
    {"_tsmp_movmin", (DL_FUNC) &_tsmp_movmin, 2},
    {"_tsmp_movmax", (DL_FUNC) &_tsmp_movmax, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_tsmp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
