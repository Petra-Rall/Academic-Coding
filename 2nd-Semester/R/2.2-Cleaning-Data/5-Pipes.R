library(dplyr)

# calculate the mean height for women by species
newdata <- starwars
newdata <- filter(newdata, sex == "female")

newdata <- group_by(newdata, species)
newdata <- summarize(newdata, mean_ht = mean(height, na.rm = TRUE))

# this can be written as more succinctly as
newdata <- starwars %>%
  filter(sex == "female") %>%
  group_by(species) %>%
  summarize(mean_ht = mean(height, na.rm = TRUE))

#The %>% operator passes the result on the left 
#to the first parameter of the function on the right.