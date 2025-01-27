library(ggplot2) 
data(Salaries, package="carData")
# plot experience vs. salary 
# (color represents rank and size represents service) 
ggplot(Salaries, aes(x = yrs.since.phd, 
                     y = salary, 
                     color = rank, 
                     size = yrs.service)) + 
  geom_point(alpha = .6) + 
  labs(title = paste0("Academic salary by rank, years of service, ", "and years since degree"))
