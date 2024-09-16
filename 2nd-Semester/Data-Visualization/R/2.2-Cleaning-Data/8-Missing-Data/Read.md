##### 1-Feature-Selection.R
### Code Breakdown

#### 1. **Loading the Dataset**

```r
data(msleep, package = "ggplot2")
```

- **`data(msleep, package = "ggplot2")`**: This line loads the `msleep` dataset from the `ggplot2` package into your R environment. The `msleep` dataset contains data about sleep patterns in mammals.

#### 2. **Calculating the Proportion of Missing Data**

```r
pctmiss <- colSums(is.na(msleep) / nrow(msleep))
```

- **`is.na(msleep)`**: This function returns a logical matrix indicating where `NA` (missing) values are in the `msleep` dataset. Each entry is `TRUE` if the value is missing and `FALSE` otherwise.
  
- **`colSums(is.na(msleep))`**: This function computes the sum of `TRUE` values (which represent missing values) for each column in the dataset. The result is a vector where each element represents the total number of missing values in a column.

- **`colSums(is.na(msleep)) / nrow(msleep)`**: This divides the number of missing values in each column by the total number of rows (`nrow(msleep)`) in the dataset. This calculation gives the proportion of missing values for each column.

- **`pctmiss`**: This variable holds the proportion of missing data for each column in the dataset.

#### 3. **Rounding and Displaying the Proportions**

```r
round(pctmiss, 2)
```

- **`round(pctmiss, 2)`**: This rounds the proportions of missing values to two decimal places for easier interpretation.

### Example Output

Let’s consider what the output might look like. The exact values depend on the dataset, but here’s a hypothetical example:

```r
# Example output
#       species        sleep_total        sleep_rem       sleep_cycle        awake
#        0.00                0.05                 0.10                0.02          0.00
```

### Explanation

- **`species`, `sleep_total`, `sleep_rem`, etc.**: These are column names from the `msleep` dataset.
- **`0.00`, `0.05`, `0.10`, etc.**: These numbers represent the proportion of missing data for each column. For instance, if `sleep_rem` has a proportion of `0.10`, it means that 10% of the values in the `sleep_rem` column are missing.

