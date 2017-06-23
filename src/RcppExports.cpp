// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// calc_auc
Rcpp::List calc_auc(const Rcpp::NumericVector& xs, const Rcpp::NumericVector& ys);
RcppExport SEXP precrec_calc_auc(SEXP xsSEXP, SEXP ysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type xs(xsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type ys(ysSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_auc(xs, ys));
    return rcpp_result_gen;
END_RCPP
}
// calc_avg_curve
Rcpp::List calc_avg_curve(const Rcpp::List& curves, double x_bins, double ci_q);
RcppExport SEXP precrec_calc_avg_curve(SEXP curvesSEXP, SEXP x_binsSEXP, SEXP ci_qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type curves(curvesSEXP);
    Rcpp::traits::input_parameter< double >::type x_bins(x_binsSEXP);
    Rcpp::traits::input_parameter< double >::type ci_q(ci_qSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_avg_curve(curves, x_bins, ci_q));
    return rcpp_result_gen;
END_RCPP
}
// calc_avg_points
Rcpp::List calc_avg_points(const Rcpp::List& points, double ci_q);
RcppExport SEXP precrec_calc_avg_points(SEXP pointsSEXP, SEXP ci_qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type points(pointsSEXP);
    Rcpp::traits::input_parameter< double >::type ci_q(ci_qSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_avg_points(points, ci_q));
    return rcpp_result_gen;
END_RCPP
}
// calc_basic_measures
Rcpp::List calc_basic_measures(int np, int nn, const Rcpp::NumericVector& tps, const Rcpp::NumericVector& fps, const Rcpp::NumericVector& tns, const Rcpp::NumericVector& fns);
RcppExport SEXP precrec_calc_basic_measures(SEXP npSEXP, SEXP nnSEXP, SEXP tpsSEXP, SEXP fpsSEXP, SEXP tnsSEXP, SEXP fnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type np(npSEXP);
    Rcpp::traits::input_parameter< int >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type tps(tpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type fps(fpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type tns(tnsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type fns(fnsSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_basic_measures(np, nn, tps, fps, tns, fns));
    return rcpp_result_gen;
END_RCPP
}
// calc_uauc
Rcpp::List calc_uauc(unsigned np, unsigned nn, const Rcpp::NumericVector& scores, const Rcpp::IntegerVector& olabs, const bool& na_worst, const std::string& ties_method);
RcppExport SEXP precrec_calc_uauc(SEXP npSEXP, SEXP nnSEXP, SEXP scoresSEXP, SEXP olabsSEXP, SEXP na_worstSEXP, SEXP ties_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned >::type np(npSEXP);
    Rcpp::traits::input_parameter< unsigned >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type olabs(olabsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_worst(na_worstSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type ties_method(ties_methodSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_uauc(np, nn, scores, olabs, na_worst, ties_method));
    return rcpp_result_gen;
END_RCPP
}
// calc_uauc_frank
Rcpp::List calc_uauc_frank(unsigned np, unsigned nn, const Rcpp::NumericVector& scores, const Rcpp::IntegerVector& olabs, const bool& na_last, const std::string& ties_method, Rcpp::Function frank);
RcppExport SEXP precrec_calc_uauc_frank(SEXP npSEXP, SEXP nnSEXP, SEXP scoresSEXP, SEXP olabsSEXP, SEXP na_lastSEXP, SEXP ties_methodSEXP, SEXP frankSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned >::type np(npSEXP);
    Rcpp::traits::input_parameter< unsigned >::type nn(nnSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type olabs(olabsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_last(na_lastSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type ties_method(ties_methodSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type frank(frankSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_uauc_frank(np, nn, scores, olabs, na_last, ties_method, frank));
    return rcpp_result_gen;
END_RCPP
}
// convert_curve_avg_df
Rcpp::List convert_curve_avg_df(const Rcpp::List& obj, const Rcpp::CharacterVector& uniq_modnames, const Rcpp::IntegerVector& modnames, const Rcpp::List& curvetype_names, const int x_bins);
RcppExport SEXP precrec_convert_curve_avg_df(SEXP objSEXP, SEXP uniq_modnamesSEXP, SEXP modnamesSEXP, SEXP curvetype_namesSEXP, SEXP x_binsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type uniq_modnames(uniq_modnamesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type modnames(modnamesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type curvetype_names(curvetype_namesSEXP);
    Rcpp::traits::input_parameter< const int >::type x_bins(x_binsSEXP);
    rcpp_result_gen = Rcpp::wrap(convert_curve_avg_df(obj, uniq_modnames, modnames, curvetype_names, x_bins));
    return rcpp_result_gen;
END_RCPP
}
// convert_curve_df
Rcpp::List convert_curve_df(const Rcpp::List& obj, const Rcpp::CharacterVector& uniq_modnames, const Rcpp::CharacterVector& uniq_dsids, const Rcpp::IntegerVector& modnames, const Rcpp::IntegerVector& dsids, const Rcpp::CharacterVector& dsid_modnames, const Rcpp::List& curvetype_names, const int x_bins);
RcppExport SEXP precrec_convert_curve_df(SEXP objSEXP, SEXP uniq_modnamesSEXP, SEXP uniq_dsidsSEXP, SEXP modnamesSEXP, SEXP dsidsSEXP, SEXP dsid_modnamesSEXP, SEXP curvetype_namesSEXP, SEXP x_binsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type uniq_modnames(uniq_modnamesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type uniq_dsids(uniq_dsidsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type modnames(modnamesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type dsids(dsidsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type dsid_modnames(dsid_modnamesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type curvetype_names(curvetype_namesSEXP);
    Rcpp::traits::input_parameter< const int >::type x_bins(x_binsSEXP);
    rcpp_result_gen = Rcpp::wrap(convert_curve_df(obj, uniq_modnames, uniq_dsids, modnames, dsids, dsid_modnames, curvetype_names, x_bins));
    return rcpp_result_gen;
END_RCPP
}
// create_confusion_matrices
Rcpp::List create_confusion_matrices(const Rcpp::IntegerVector& olabs, const Rcpp::NumericVector& ranks, const Rcpp::IntegerVector& rank_idx);
RcppExport SEXP precrec_create_confusion_matrices(SEXP olabsSEXP, SEXP ranksSEXP, SEXP rank_idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type olabs(olabsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type ranks(ranksSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type rank_idx(rank_idxSEXP);
    rcpp_result_gen = Rcpp::wrap(create_confusion_matrices(olabs, ranks, rank_idx));
    return rcpp_result_gen;
END_RCPP
}
// create_prc_curve
Rcpp::List create_prc_curve(const Rcpp::NumericVector& tps, const Rcpp::NumericVector& fps, const Rcpp::NumericVector& sn, const Rcpp::NumericVector& pr, double x_bins);
RcppExport SEXP precrec_create_prc_curve(SEXP tpsSEXP, SEXP fpsSEXP, SEXP snSEXP, SEXP prSEXP, SEXP x_binsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type tps(tpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type fps(fpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type sn(snSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type pr(prSEXP);
    Rcpp::traits::input_parameter< double >::type x_bins(x_binsSEXP);
    rcpp_result_gen = Rcpp::wrap(create_prc_curve(tps, fps, sn, pr, x_bins));
    return rcpp_result_gen;
END_RCPP
}
// create_roc_curve
Rcpp::List create_roc_curve(const Rcpp::NumericVector& tps, const Rcpp::NumericVector& fps, const Rcpp::NumericVector& sp, const Rcpp::NumericVector& sn, double x_bins);
RcppExport SEXP precrec_create_roc_curve(SEXP tpsSEXP, SEXP fpsSEXP, SEXP spSEXP, SEXP snSEXP, SEXP x_binsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type tps(tpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type fps(fpsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type sp(spSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type sn(snSEXP);
    Rcpp::traits::input_parameter< double >::type x_bins(x_binsSEXP);
    rcpp_result_gen = Rcpp::wrap(create_roc_curve(tps, fps, sp, sn, x_bins));
    return rcpp_result_gen;
END_RCPP
}
// format_labels
Rcpp::List format_labels(SEXP labels, SEXP posclass);
RcppExport SEXP precrec_format_labels(SEXP labelsSEXP, SEXP posclassSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type labels(labelsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type posclass(posclassSEXP);
    rcpp_result_gen = Rcpp::wrap(format_labels(labels, posclass));
    return rcpp_result_gen;
END_RCPP
}
// get_score_ranks
Rcpp::List get_score_ranks(const Rcpp::NumericVector& scores, const bool& na_worst, const std::string& ties_method);
RcppExport SEXP precrec_get_score_ranks(SEXP scoresSEXP, SEXP na_worstSEXP, SEXP ties_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< const bool& >::type na_worst(na_worstSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type ties_method(ties_methodSEXP);
    rcpp_result_gen = Rcpp::wrap(get_score_ranks(scores, na_worst, ties_method));
    return rcpp_result_gen;
END_RCPP
}
