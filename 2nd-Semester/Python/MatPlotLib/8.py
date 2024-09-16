import matplotlib.pyplot as plt
import numpy as np

ypoints = np.array([3,8,1,10])
y2 = np.array([6,2,7,11])

plt.plot(ypoints, ls = '--', color = 'r')
plt.plot(y2, lw = '20.5')

#linestyle can be written as ls
#solid can be written as -
#dotted can be written as :
#dashed can be written as --
#dashdot can be written as -.
#None can be written as '' or ' '

#linewidth as lw
#color as c
#You can also use Hexadecimal color values
#Or any of the 140 supported color names

plt.show()