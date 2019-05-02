import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("calor.dat")
inicial= data[:,0]
final= data[:,1]
x=np.arange(0,201,1)
#n_points = int(np.sqrt(len(data)))
#grid = np.reshape(data, (n_points, n_points))
#print(n_points)


plt.figure()
#plt.subplot(1,2,1)
#plt.imshow(grid)
#plt.xlabel("X")
#plt.ylabel("Y")
#plt.colorbar(label="Potencial")

#plt.subplot(1,2,2)
plt.plot(x,inicial,label="tiempo inicial")
plt.plot(x,final,label="tiempo inicial")
plt.xlabel("Indice X")
plt.ylabel("Temperatura")
plt.legend()


plt.savefig("plot.png")
