library(ggplot2)

# Data for the pie chart
data <- data.frame(
  category = c("Category A", "Category B", "Category C", "Category D"),
  value = c(25, 35, 20, 20)
)

# Calculate the percentage for each category
data$fraction = data$value / sum(data$value)
data$ymax = cumsum(data$fraction)  # cumulative sum of fractions
data$ymin = c(0, head(data$ymax, n=-1))  # starting point for each slice

# Create the pie chart using ggplot2
ggplot(data, aes(ymax = ymax, ymin = ymin, xmax = 4, xmin = 3, fill = category)) +
  geom_rect(color="black") +
  coord_polar(theta = "y") +  # This transforms the plot into a pie chart
  theme_void() +  # Clean up the background
  theme(legend.title = element_blank()) +  # Remove legend title
  labs(title = "Beautiful Pie Chart") +  # Add a title
  scale_fill_brewer(palette = "Set3")+  # Color palette from RColorBrewer
  geom_text(aes(x = 3.5, 
                y = (ymax + ymin) / 2, 
                label = paste0(round(fraction * 100, 1), "%")), 
                color = "black", size = 6)  # Add percentages as text
