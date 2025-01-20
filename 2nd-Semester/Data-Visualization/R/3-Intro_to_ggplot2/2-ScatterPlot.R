library(ggplot2)
# specify dataset and mapping
ggplot(data = insurance, mapping = aes(x=age, y=expenses))

# add points
ggplot(data=insurance, mapping=aes(x=age, y=expenses)) + 
  geom_point()

# make points blue, larger, and semi-transparent
ggplot(data=insurance, mapping=aes(x=age,y=expenses))+
  geom_point(color='cornflowerblue', alpha = 0.7, size = 2)

# add a line of best fit.
ggplot(data=insurance, mapping=aes(x=age,y=expenses))+
  geom_point(color='cornflowerblue', alpha = 0.7, size = 2)+
  geom_smooth(method="lm")
