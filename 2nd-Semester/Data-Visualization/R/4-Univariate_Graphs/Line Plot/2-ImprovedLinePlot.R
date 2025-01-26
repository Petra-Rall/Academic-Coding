library(ggplot2)

data(gapminder, package="gapminder")

# Select US cases
library(dplyr)
plotdata <- filter(gapminder, country == "United States")

# line plot with points 
# and improved labeling

ggplot(plotdata,aes(x=year, y=lifeExp))+
  geom_line(size=1.5,
            color="lightgrey")+
  geom_point(size=3,
             color="steelblue")+
  labs(y = "Life Expectancy (years)", 
        x = "Year", 
        title = "Life expectancy changes over time", 
        subtitle = "United States (1952-2007)", 
        caption = "Source: http://www.gapminder.org/data/")