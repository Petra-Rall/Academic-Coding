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
  # scatterplot with quadratic line of best fit
  geom_smooth(method="lm",
              formula=y~poly(x,2),
              color="indianred3")