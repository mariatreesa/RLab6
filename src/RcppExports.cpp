// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// vectorSum
double vectorSum(NumericVector x);
RcppExport SEXP _knapsack_vectorSum(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(vectorSum(x));
    return rcpp_result_gen;
END_RCPP
}
// knapSackdynamic_cpp
NumericMatrix knapSackdynamic_cpp(int W, NumericVector wt, NumericVector val, int n);
RcppExport SEXP _knapsack_knapSackdynamic_cpp(SEXP WSEXP, SEXP wtSEXP, SEXP valSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type W(WSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type wt(wtSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type val(valSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(knapSackdynamic_cpp(W, wt, val, n));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_knapsack_vectorSum", (DL_FUNC) &_knapsack_vectorSum, 1},
    {"_knapsack_knapSackdynamic_cpp", (DL_FUNC) &_knapsack_knapSackdynamic_cpp, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_knapsack(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
