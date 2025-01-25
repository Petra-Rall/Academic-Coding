library(dplyr)

# Sample data (replace this with your actual dataset)
race <- Marriage$race

# Count the occurrences of each race
count <- Marriage %>% count(race)

# Calculate the percentage
count$percentage <- round((count$n / sum(count$n)) * 100, 1)

# Create pie chart labels for the legend
labels_legend <- paste(count$race)

# Custom colors for each segment
custom_colors <- c("#4394E5", "#87BB62", "#F5921B", "#876FD4")

# Plot the pie chart without labels
pie_data <- pie(count$n, labels = "", main = "Pie Chart of Race Distribution",
    col = custom_colors, border = "black", radius = 1.2)
angles <- pie_data$angle + pie_data$angle[1]/2 
x_pos <- 0.7 * cos(angles)  # Adjust 0.7 for distance from the center
y_pos <- 0.7 * sin(angles)
# Add percentages inside the pie chart
percent_labels <- paste(count$percentage, "%")
text(x = x_pos, y = y_pos,
     labels = percent_labels, col = "black", cex = 0.5)

# Add a legend outside the pie chart
legend(x=1.5,y=1, legend = labels_legend, fill = custom_colors, cex = 0.5)
