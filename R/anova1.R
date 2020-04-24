##  GPL-3 License
## Copyright (c) 2020 Vincent Runge

#' anova1
#'
#' @description one-way anova analysis
#' @param df dataframe of size n x p
#' @return a one-way anova object
anova1 <- function(df = data.frame())
{
  response <- anova1Transfer(df)

  attr(response, "class") <- "anova1"
  return(response)
}
