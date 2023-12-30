# # # n=int(input())
# # # i=0
# # # while (i<n):
# # #     print(i*i)
# # #     i+=1
# # # [print(i**2) for i in range(n)]
# # li=[None,True]
# # v=0
# # for i in li:
# #     v+=i
# # print(v)
# import matplotlib.pyplot as plt
# import numpy
# myarray = numpy.array([1, 2, 3])
# plt.plot(myarray)
# plt.xlabel('some x axis')
# plt.ylabel('some y axis')
# plt.show()
import matplotlib.pyplot as plt
import numpy as np

xpoints = np.array([0, 6])
ypoints = np.array([0, 250])

plt.plot(xpoints, ypoints)
plt.show()