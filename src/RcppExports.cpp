// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// GP1_pmf_scalar
double GP1_pmf_scalar(const double mu, const double phi, const double Y);
RcppExport SEXP _gmvjoint_GP1_pmf_scalar(SEXP muSEXP, SEXP phiSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< const double >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(GP1_pmf_scalar(mu, phi, Y));
    return rcpp_result_gen;
END_RCPP
}
// ll_Gamma
double ll_Gamma(const arma::vec& Y, const double& shape, const arma::vec& mu);
RcppExport SEXP _gmvjoint_ll_Gamma(SEXP YSEXP, SEXP shapeSEXP, SEXP muSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const double& >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    rcpp_result_gen = Rcpp::wrap(ll_Gamma(Y, shape, mu));
    return rcpp_result_gen;
END_RCPP
}
// ll_genpois
double ll_genpois(const arma::vec& eta, const double phi, arma::vec& Y);
RcppExport SEXP _gmvjoint_ll_genpois(SEXP etaSEXP, SEXP phiSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< const double >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(ll_genpois(eta, phi, Y));
    return rcpp_result_gen;
END_RCPP
}
// logfti
double logfti(const arma::vec& b, const arma::rowvec& S, const arma::mat& SS, const arma::rowvec& Fi, const arma::mat& Fu, const double l0i, const arma::rowvec& haz, const int Delta, const arma::vec& gamma_rep, const arma::vec& zeta);
RcppExport SEXP _gmvjoint_logfti(SEXP bSEXP, SEXP SSEXP, SEXP SSSEXP, SEXP FiSEXP, SEXP FuSEXP, SEXP l0iSEXP, SEXP hazSEXP, SEXP DeltaSEXP, SEXP gamma_repSEXP, SEXP zetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type SS(SSSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type Fi(FiSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Fu(FuSEXP);
    Rcpp::traits::input_parameter< const double >::type l0i(l0iSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type haz(hazSEXP);
    Rcpp::traits::input_parameter< const int >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type gamma_rep(gamma_repSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type zeta(zetaSEXP);
    rcpp_result_gen = Rcpp::wrap(logfti(b, S, SS, Fi, Fu, l0i, haz, Delta, gamma_rep, zeta));
    return rcpp_result_gen;
END_RCPP
}
// joint_density
double joint_density(const arma::vec& b, const List Y, const List X, const List Z, const arma::vec& beta, const arma::mat& D, const List sigma, const List family, const int Delta, const arma::rowvec& S, const arma::rowvec& Fi, const double l0i, const arma::mat& SS, const arma::mat& Fu, const arma::rowvec& haz, const arma::vec& gamma_rep, const arma::vec& zeta, const List beta_inds, const List b_inds, const int K);
RcppExport SEXP _gmvjoint_joint_density(SEXP bSEXP, SEXP YSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP betaSEXP, SEXP DSEXP, SEXP sigmaSEXP, SEXP familySEXP, SEXP DeltaSEXP, SEXP SSEXP, SEXP FiSEXP, SEXP l0iSEXP, SEXP SSSEXP, SEXP FuSEXP, SEXP hazSEXP, SEXP gamma_repSEXP, SEXP zetaSEXP, SEXP beta_indsSEXP, SEXP b_indsSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const List >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const List >::type X(XSEXP);
    Rcpp::traits::input_parameter< const List >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const List >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const List >::type family(familySEXP);
    Rcpp::traits::input_parameter< const int >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type Fi(FiSEXP);
    Rcpp::traits::input_parameter< const double >::type l0i(l0iSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type SS(SSSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Fu(FuSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type haz(hazSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type gamma_rep(gamma_repSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type zeta(zetaSEXP);
    Rcpp::traits::input_parameter< const List >::type beta_inds(beta_indsSEXP);
    Rcpp::traits::input_parameter< const List >::type b_inds(b_indsSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(joint_density(b, Y, X, Z, beta, D, sigma, family, Delta, S, Fi, l0i, SS, Fu, haz, gamma_rep, zeta, beta_inds, b_inds, K));
    return rcpp_result_gen;
END_RCPP
}
// maketau
List maketau(const List& S, const List& Z);
RcppExport SEXP _gmvjoint_maketau(SEXP SSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const List& >::type Z(ZSEXP);
    rcpp_result_gen = Rcpp::wrap(maketau(S, Z));
    return rcpp_result_gen;
END_RCPP
}
// joint_density_ddb
arma::vec joint_density_ddb(const arma::vec& b, const List Y, const List X, const List Z, const arma::vec& beta, const arma::mat& D, const List sigma, const List family, const int Delta, const arma::rowvec& S, const arma::rowvec& Fi, const double l0i, const arma::mat& SS, const arma::mat& Fu, const arma::rowvec& haz, const arma::vec& gamma_rep, const arma::vec& zeta, const List beta_inds, const List b_inds, const int K);
RcppExport SEXP _gmvjoint_joint_density_ddb(SEXP bSEXP, SEXP YSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP betaSEXP, SEXP DSEXP, SEXP sigmaSEXP, SEXP familySEXP, SEXP DeltaSEXP, SEXP SSEXP, SEXP FiSEXP, SEXP l0iSEXP, SEXP SSSEXP, SEXP FuSEXP, SEXP hazSEXP, SEXP gamma_repSEXP, SEXP zetaSEXP, SEXP beta_indsSEXP, SEXP b_indsSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const List >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const List >::type X(XSEXP);
    Rcpp::traits::input_parameter< const List >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const List >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const List >::type family(familySEXP);
    Rcpp::traits::input_parameter< const int >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type Fi(FiSEXP);
    Rcpp::traits::input_parameter< const double >::type l0i(l0iSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type SS(SSSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Fu(FuSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type haz(hazSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type gamma_rep(gamma_repSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type zeta(zetaSEXP);
    Rcpp::traits::input_parameter< const List >::type beta_inds(beta_indsSEXP);
    Rcpp::traits::input_parameter< const List >::type b_inds(b_indsSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(joint_density_ddb(b, Y, X, Z, beta, D, sigma, family, Delta, S, Fi, l0i, SS, Fu, haz, gamma_rep, zeta, beta_inds, b_inds, K));
    return rcpp_result_gen;
END_RCPP
}
// Sbeta
arma::vec Sbeta(const arma::vec& beta, const List& X, const List& Y, const List& Z, const List& b, const List& sigma, const List& family, const List& beta_inds, const int K, const bool quad, const List& tau, const arma::vec& w, const arma::vec& v);
RcppExport SEXP _gmvjoint_Sbeta(SEXP betaSEXP, SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP bSEXP, SEXP sigmaSEXP, SEXP familySEXP, SEXP beta_indsSEXP, SEXP KSEXP, SEXP quadSEXP, SEXP tauSEXP, SEXP wSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const List& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const List& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const List& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const List& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const List& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const List& >::type family(familySEXP);
    Rcpp::traits::input_parameter< const List& >::type beta_inds(beta_indsSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const bool >::type quad(quadSEXP);
    Rcpp::traits::input_parameter< const List& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(Sbeta(beta, X, Y, Z, b, sigma, family, beta_inds, K, quad, tau, w, v));
    return rcpp_result_gen;
END_RCPP
}
// Hbeta
arma::mat Hbeta(const arma::vec& beta, const List& X, const List& Y, const List& Z, const List& b, const List& sigma, const List& family, const List& beta_inds, const int K, const bool& quad, const List& tau, const arma::vec& w, const arma::vec& v);
RcppExport SEXP _gmvjoint_Hbeta(SEXP betaSEXP, SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP bSEXP, SEXP sigmaSEXP, SEXP familySEXP, SEXP beta_indsSEXP, SEXP KSEXP, SEXP quadSEXP, SEXP tauSEXP, SEXP wSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const List& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const List& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const List& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const List& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const List& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const List& >::type family(familySEXP);
    Rcpp::traits::input_parameter< const List& >::type beta_inds(beta_indsSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const bool& >::type quad(quadSEXP);
    Rcpp::traits::input_parameter< const List& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(Hbeta(beta, X, Y, Z, b, sigma, family, beta_inds, K, quad, tau, w, v));
    return rcpp_result_gen;
END_RCPP
}
// vare_update
double vare_update(const arma::mat& X, const arma::vec& Y, const arma::mat& Z, const arma::vec& b, const arma::vec& beta, const arma::vec& tau, const arma::vec& w, const arma::vec& v);
RcppExport SEXP _gmvjoint_vare_update(SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP bSEXP, SEXP betaSEXP, SEXP tauSEXP, SEXP wSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(vare_update(X, Y, Z, b, beta, tau, w, v));
    return rcpp_result_gen;
END_RCPP
}
// phi_update
List phi_update(const arma::vec& b, const arma::mat& X, const arma::vec& Y, const arma::mat& Z, const arma::vec& beta, const double phi, const arma::vec& w, const arma::vec& v, const arma::vec& tau);
RcppExport SEXP _gmvjoint_phi_update(SEXP bSEXP, SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP betaSEXP, SEXP phiSEXP, SEXP wSEXP, SEXP vSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type v(vSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(phi_update(b, X, Y, Z, beta, phi, w, v, tau));
    return rcpp_result_gen;
END_RCPP
}
// Sgammazeta
arma::vec Sgammazeta(arma::vec& gammazeta, arma::vec& b, List Sigma, arma::rowvec& S, arma::mat& SS, arma::mat& Fu, arma::rowvec& Fi, arma::vec& haz, int Delta, arma::vec& w, arma::vec& v, List b_inds, int K, int q, long double eps);
RcppExport SEXP _gmvjoint_Sgammazeta(SEXP gammazetaSEXP, SEXP bSEXP, SEXP SigmaSEXP, SEXP SSEXP, SEXP SSSEXP, SEXP FuSEXP, SEXP FiSEXP, SEXP hazSEXP, SEXP DeltaSEXP, SEXP wSEXP, SEXP vSEXP, SEXP b_indsSEXP, SEXP KSEXP, SEXP qSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type gammazeta(gammazetaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< List >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< arma::rowvec& >::type S(SSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type SS(SSSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Fu(FuSEXP);
    Rcpp::traits::input_parameter< arma::rowvec& >::type Fi(FiSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type haz(hazSEXP);
    Rcpp::traits::input_parameter< int >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type v(vSEXP);
    Rcpp::traits::input_parameter< List >::type b_inds(b_indsSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< long double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(Sgammazeta(gammazeta, b, Sigma, S, SS, Fu, Fi, haz, Delta, w, v, b_inds, K, q, eps));
    return rcpp_result_gen;
END_RCPP
}
// Hgammazeta
arma::mat Hgammazeta(arma::vec& gammazeta, arma::vec& b, List Sigma, arma::rowvec& S, arma::mat& SS, arma::mat& Fu, arma::rowvec& Fi, arma::vec& haz, int Delta, arma::vec& w, arma::vec& v, List b_inds, int K, int q, double eps);
RcppExport SEXP _gmvjoint_Hgammazeta(SEXP gammazetaSEXP, SEXP bSEXP, SEXP SigmaSEXP, SEXP SSEXP, SEXP SSSEXP, SEXP FuSEXP, SEXP FiSEXP, SEXP hazSEXP, SEXP DeltaSEXP, SEXP wSEXP, SEXP vSEXP, SEXP b_indsSEXP, SEXP KSEXP, SEXP qSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type gammazeta(gammazetaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< List >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< arma::rowvec& >::type S(SSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type SS(SSSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Fu(FuSEXP);
    Rcpp::traits::input_parameter< arma::rowvec& >::type Fi(FiSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type haz(hazSEXP);
    Rcpp::traits::input_parameter< int >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type v(vSEXP);
    Rcpp::traits::input_parameter< List >::type b_inds(b_indsSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(Hgammazeta(gammazeta, b, Sigma, S, SS, Fu, Fi, haz, Delta, w, v, b_inds, K, q, eps));
    return rcpp_result_gen;
END_RCPP
}
// lambdaUpdate
arma::mat lambdaUpdate(List survtimes, arma::mat& ft, arma::vec& gamma, arma::vec& gamma_rep, arma::vec& zeta, List S, List Sigma, List b, arma::vec& w, arma::vec& v, List b_inds, int K, int q);
RcppExport SEXP _gmvjoint_lambdaUpdate(SEXP survtimesSEXP, SEXP ftSEXP, SEXP gammaSEXP, SEXP gamma_repSEXP, SEXP zetaSEXP, SEXP SSEXP, SEXP SigmaSEXP, SEXP bSEXP, SEXP wSEXP, SEXP vSEXP, SEXP b_indsSEXP, SEXP KSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type survtimes(survtimesSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type ft(ftSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type gamma_rep(gamma_repSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type zeta(zetaSEXP);
    Rcpp::traits::input_parameter< List >::type S(SSEXP);
    Rcpp::traits::input_parameter< List >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< List >::type b(bSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type v(vSEXP);
    Rcpp::traits::input_parameter< List >::type b_inds(b_indsSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(lambdaUpdate(survtimes, ft, gamma, gamma_rep, zeta, S, Sigma, b, w, v, b_inds, K, q));
    return rcpp_result_gen;
END_RCPP
}
// joint_density_sdb
arma::mat joint_density_sdb(const arma::vec& b, const List Y, const List X, const List Z, const arma::vec& beta, const arma::mat& D, const List sigma, const List family, const int Delta, const arma::rowvec& S, const arma::rowvec& Fi, const double l0i, const arma::mat& SS, const arma::mat& Fu, const arma::rowvec& haz, const arma::vec& gamma_rep, const arma::vec& zeta, const List beta_inds, const List b_inds, const int K, double eps);
RcppExport SEXP _gmvjoint_joint_density_sdb(SEXP bSEXP, SEXP YSEXP, SEXP XSEXP, SEXP ZSEXP, SEXP betaSEXP, SEXP DSEXP, SEXP sigmaSEXP, SEXP familySEXP, SEXP DeltaSEXP, SEXP SSEXP, SEXP FiSEXP, SEXP l0iSEXP, SEXP SSSEXP, SEXP FuSEXP, SEXP hazSEXP, SEXP gamma_repSEXP, SEXP zetaSEXP, SEXP beta_indsSEXP, SEXP b_indsSEXP, SEXP KSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type b(bSEXP);
    Rcpp::traits::input_parameter< const List >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const List >::type X(XSEXP);
    Rcpp::traits::input_parameter< const List >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< const List >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const List >::type family(familySEXP);
    Rcpp::traits::input_parameter< const int >::type Delta(DeltaSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type S(SSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type Fi(FiSEXP);
    Rcpp::traits::input_parameter< const double >::type l0i(l0iSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type SS(SSSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Fu(FuSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type haz(hazSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type gamma_rep(gamma_repSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type zeta(zetaSEXP);
    Rcpp::traits::input_parameter< const List >::type beta_inds(beta_indsSEXP);
    Rcpp::traits::input_parameter< const List >::type b_inds(b_indsSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(joint_density_sdb(b, Y, X, Z, beta, D, sigma, family, Delta, S, Fi, l0i, SS, Fu, haz, gamma_rep, zeta, beta_inds, b_inds, K, eps));
    return rcpp_result_gen;
END_RCPP
}
