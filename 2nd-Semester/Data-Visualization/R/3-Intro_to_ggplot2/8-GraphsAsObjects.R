library(ggplot2)
# create scatterplot and save it
myplot <- ggplot(insurance, aes(x=age,y=expenses))+
  geom_point()

# plot the graph
myplot


# make the points larger and blue 
# then print the graph
myplot <- myplot+geom_point(size=2, color="blue")

myplot

# print the graph with a title and line of best fit 
# but don't save those changes
myplot+geom_smooth(method="lm")+
  labs(title="Mildly interesting graph")

# print the graph with a black and white theme 
# but don't save those changes

myplot+theme_bw()