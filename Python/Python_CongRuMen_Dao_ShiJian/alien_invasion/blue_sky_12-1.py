"""
蓝色的天空：创建一个背景为蓝色的Pygame窗口.
"""
import pygame

pygame.init()
#设置参数
bg_color = (3, 168, 158) #蓝色
screen = pygame.display.set_mode((1200, 800))
pygame.display.set_caption("Blue Sky")
#绘制
screen.fill(bg_color)
pygame.display.flip()



