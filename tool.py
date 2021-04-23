import os
from PIL import Image
import numpy as np


def resizePic(img, width=0, height=0):
    im = Image.open(img)
    w, h = im.size
    im.show()


def resizeAllPics(rootPath, width=0, height=0, targetPath="res\\"):
    for path, dir_list, file_list in os.walk(rootPath):
        for filename in file_list:
            file_path = os.path.join(path, filename)
            #im = Image.open(file_path)
            #im1 = im.resize((width, height))
            #im1.save(os.path.join(targetPath, filename), "PNG")
            print(file_path)
        for dir_name in dir_list:
            dir_path = os.path.join(path, dir_name)
            f(dir_path)


def imageList(rootPath):
    l = []
    for path, dir_list, file_list in os.walk(rootPath):
        for filename in file_list:
            file_path = os.path.join(path, filename)
            im = Image.open(file_path)
            l.append(im)
        for dir_name in dir_list:
            dir_path = os.path.join(path, dir_name)
            f(dir_path)
    print(len(l))
    return l, len(l)


def generateMorePics(rootPath, targetPath, number):
    imgList, lLen = imageList(rootPath)
    count = 0
    for i in range(number):
        im = imgList[count % lLen]
        count = count+1
        im.save(os.path.join(targetPath, str(count)+".png"), 'PNG')


ROOT = "D:\\uidq2886\\Desktop\\python\\res"
TARGET = "D:\\uidq2886\\Desktop\\python\\pic"
WIDTH, HEIGHT = 360, 192
NUMBER = 140
#generateMorePics(ROOT, TARGET, NUMBER)
resizeAllPics(TARGET)
