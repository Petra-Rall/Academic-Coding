library(ggplot2)
data(Salaries,package="carData")

#simple scatterplot
ggplot(Salaries, aes(x=yrs.since.phd, y=salary))+
  geom_point()