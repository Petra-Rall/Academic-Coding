library(ggplot2) 
data(Salaries, package="carData")

# plot experience vs. salary with 
# fit lines (color represents sex) 
ggplot(Salaries, aes(x = yrs.since.phd, 
                     y = salary, 
                     color = sex)) + 
  geom_point(alpha = .4, size=3) + 
  geom_smooth(se=FALSE,
              method="lm", 
              formula=y~poly(x,2), 
              size = 1.5) + 
  labs(x = "Years Since Ph.D.", 
       title = "Academic Salary by Sex and Years Experience", 
       subtitle = "9-month salary for 2008-2009", 
       y = "", color = "Sex") + 
  scale_y_continuous(label = scales::dollar) + 
  scale_color_brewer(palette="Set1") + 
  theme_minimal()
