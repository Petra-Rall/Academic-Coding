# reproduce plot for each obsese and non-obese individuals
library(ggplot2)
ggplot(data=insurance, mapping=aes(x=age, y=expenses, color=smoker))+
  geom_point(alpha=0.5, size = 2)+
  geom_smooth(method="lm", se=FALSE, size=1.5)+
  scale_x_continuous(breaks=seq(0,70,10))+
  scale_y_continuous(breaks=seq(0,60000,20000), label = scales::dollar)+
  scale_color_manual(values=c("indianred3", "cornflowerblue"))+
  facet_wrap(~obese)


