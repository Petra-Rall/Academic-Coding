my_function<-function(fname){
  paste("Hello World", fname)
}

my_function("John")


#Default Parameter Value:

my_function <- function(country = "Norway") {
  paste("I am from", country)
}

my_function("Sweden")
my_function("India")
my_function() # will get the default value, which is Norway
my_function("USA") 

#Return Values:

my_function <- function(x) {
  return (5 * x)
}

print(my_function(3))
print(my_function(5))
print(my_function(9)) 


##################################
#recursive function:
tri_recursion <- function(k) {
  if (k > 0) {
    result <- k + tri_recursion(k - 1)
    print(result)
  } else {
    result = 0
    return(result)
  }
}
tri_recursion(6) 


#########################
#Global variabale:
txt <<- "fantastic"