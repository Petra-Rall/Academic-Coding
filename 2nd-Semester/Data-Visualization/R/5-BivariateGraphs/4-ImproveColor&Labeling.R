# • factor modifies the order of the categories for the class variable and both the order and the labels for the drive variable 
# • scale_y_continuous modifies the y-axis tick mark labels • labs provides a title and changed the labels for the x and y axes and the legend 
# • scale_fill_brewer changes the fill color scheme
# • labs provides a title and changed the labels for the x and y axes and the legend 
# • scale_fill_brewer changes the fill color scheme 
# • theme_minimal removes the grey background and changed the grid color

library(ggplot2)

# bar plot, with each bar representing 100%, 
# reordered bars, and better labels and color

library(scales)
ggplot(mpg,aes(x=factor(class,
                        levels=c("2seater", "subcompact", "compact", "midsize", "minivan", "suv", "pickup")),
               fill=factor(drv,
                           levels =c("f", "r", "4"),
                           labels=c("front-wheel", "rear-wheel", "4-wheel"))))+
  geom_bar(position="fill")+
  scale_y_continuous(breaks=seq(0,1,.2),
                     label=percent)+
  scale_fill_brewer(palette="Set2")+
  labs(y="Percent",
       fill="Drive Train",
       x="Class",
       title="Automobile Drive by Class")+
  theme_minimal()
