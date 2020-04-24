#include <iostream>
#include <string>
#include<math.h>

#include"Omega.h"

#include<Rcpp.h>

using namespace Rcpp;

// [[Rcpp::export]]
List anova1Transfer(DataFrame df)
{
  Omega omega = Omega(5);

  Rcpp::List res = Rcpp::List::create(
    _["res1"] = 1,
    _["res2"] = omega.GetN()
  );

  return res;
}
