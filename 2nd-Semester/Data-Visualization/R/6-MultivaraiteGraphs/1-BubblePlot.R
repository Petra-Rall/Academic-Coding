# create a bubble plot 
data(mtcars) 
library(ggplot2) 
ggplot(mtcars, aes(x = wt, y = mpg, size = hp)) + 
  geom_point(alpha=0.5, fill="cornflowerblue", color="black",
             shape=21)+
  scale_size_continuous(range = c(1, 14)) + 
  labs(title = "Auto mileage by weight and horsepower", 
       subtitle = "Motor Trend US Magazine (1973-74 models)", 
       x = "Weight (1000 lbs)", 
       y = "Miles/(US) gallon", 
       size = "Gross horsepower")