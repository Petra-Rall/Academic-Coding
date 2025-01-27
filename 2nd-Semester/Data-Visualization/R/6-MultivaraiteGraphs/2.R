library(ggplot2) 
data(Salaries, package="carData") 

# plot experience vs. salary 
ggplot(Salaries, aes(x = yrs.since.phd, y = salary)) + 
  geom_point() + 
  labs(title = "Academic salary by years since degree") 

# plot experience vs. salary (color represents rank) 
ggplot(Salaries, aes(x = yrs.since.phd, 
                     y = salary, 
                     color=rank)) + 
  geom_point() + 
  labs(title = "Academic salary by rank and years since degree")

# plot experience vs. salary 
# (color represents rank, shape represents sex) 
ggplot(Salaries, aes(x = yrs.since.phd, 
                     y = salary, 
                     color = rank, 
                     shape = sex)) + 
  geom_point(size = 3, alpha = .6) + 
  labs(title = "Academic salary by rank, sex, and years since degree")
