url <- "https://tinyurl.com/mtktm8e5"
library(readr)
insurance <- read.csv(url)

insurance$obese <- ifelse(insurance$bmi >= 30, "obese", "not obese")