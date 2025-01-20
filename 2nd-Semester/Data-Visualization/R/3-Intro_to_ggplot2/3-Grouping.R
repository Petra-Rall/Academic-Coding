# indicate sex using color
library(ggplot2)

ggplot(data=insurance, mapping=aes(x=age,y=expenses, color=smoker))+
  geom_point(alpha=0.5, size=2)+
  geom_smooth(method="lm", se=FALSE, size=1.5)

#(se = FALSE) was added to suppresses the confidence intervals.a 
