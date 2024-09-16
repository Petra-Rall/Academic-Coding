library(dplyr)

# calculate mean height and mass
newdata <- summarize(starwars, 
                     mean_ht = mean(height, na.rm = TRUE),
                     mean_mas = mean(mass, na.rm = TRUE))

#calculate mean height and weight by gender
newdata <- group_by(starwars, gender)
newdata <- summarize(newdata,
                     mean_ht = mean(height, na.rm=TRUE), 
                     mean_wt = mean(mass, na.rm=TRUE))


# When you include na.rm = TRUE, you are instructing 
#the function to remove or ignore NA values 
#before performing its computation.