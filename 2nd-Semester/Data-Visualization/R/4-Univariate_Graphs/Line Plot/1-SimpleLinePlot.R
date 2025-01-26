library(ggplot2)

data(gapminder, package="gapminder")

# Select US cases
library(dplyr)
plotdata <- filter(gapminder, country == "United States")

# simple line plot

ggplot(plotdata,aes(x=year, y=lifeExp))+
  geom_line()