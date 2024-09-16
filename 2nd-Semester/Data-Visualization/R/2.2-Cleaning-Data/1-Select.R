# Selecting variables:

library(dplyr)
# keep the variables name, height, and gender
newdata <- select(starwars, name, height, gender)

# keep the variables name and all variables 
# between mass and species inclusive
newdata <- select(starwars, name, mass:species)

# keep all variables except birth_year and gender
newdata <-select(starwars, -birth_year, -gender)
