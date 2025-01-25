# The distribution of a single categorical variable is typically 
# plotted with a bar chart, a pie chart, 
# or (less commonly) a tree map or waffle chart.
library(ggplot2)
data(Marriage, package = "mosaicData")

# plot the distribution of race
ggplot(Marriage, aes(x=race))+
  geom_bar()

# In ggplot2, fill parameter is used to specify the color of
# areas such as bars, rectangles, and polygons.
# The color parameter specifies the color objects 
# that technically do not have an area, such as points, lines, and borders.

ggplot(Marriage, aes(x=race))+
  geom_bar(fill="#1AC9E6", color="#1A7B8F")+
theme(text = element_text(color = "#241C1C"))+  # Legend title
  labs(x="Race", y="Frequency", title="Participants by race")

