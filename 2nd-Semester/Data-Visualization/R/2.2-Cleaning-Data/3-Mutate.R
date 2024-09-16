library(dplyr)

# convert height in centimeters to inches, 
# and mass in kilograms to pounds
newdata <- mutate(starwars, height = height * 0.394, mass = mass * 2.205)

# if height is greater than 180then heightcat= "tall", 
# otherwise heightcat ="short"
newdata <- mutate(starwars, heightcat = ifelse(height > 180, "tall", "short"))

# convert any eye color that is not black,blue or brown,to other.
newdata <- mutate(starwars, eye_color = ifelse(eye_color %in% c("black", "blue", "brown"), eye_color, "other"))

#set heights greater than 200 or less than 75 to missing:
newdata <- mutate(starwars, height = ifelse(height < 75 | height > 200, NA, height))
