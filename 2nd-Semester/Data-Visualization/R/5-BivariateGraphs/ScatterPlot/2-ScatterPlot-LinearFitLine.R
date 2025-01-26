# The geom_point function has options that can be used to change: 
# • color–point color 
# • size–point size 
# • shape–point shape 
# • alpha–point transparency. Transparency ranges from 0 (transparent) to 1 (opaque), 
# and is a useful parameter when points overlap.

library(ggplot2)
data(Salaries,package="carData")

# enhanced scatter plot
ggplot(Salaries, aes(x=yrs.since.phd, y=salary))+
  geom_point(color="cornflowerblue",
             size=2,
             alpha=0.8)+
  scale_y_continuous(label=scales::dollar,
                     limits=c(50000,250000))+
  scale_x_continuous(breaks=seq(0,60,10),
                     limits=c(0,60))+
  labs(x="Years Since PhD",
       y=" ",
       title="Experience vs Salary",
       subtitle="9-month salary for 2008-2009")+
  # scatterplot with linear fit line
  geom_smooth(method="lm")