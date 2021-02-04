import pygame
class MaoTouYing():
    def __init__(self, screen):
        """初始化猫头鹰及其位置"""
        self.screen = screen
        
        #加载飞船图像并获取外接矩形
        self.image = pygame.image.load('images/maotouying.bmp')
        self.rect = self.image.get_rect()
        self.screen_rect = screen.get_rect()
        
        #把猫头鹰放在屏幕底部中央
        self.rect.midbottom = self.screen_rect.midbottom
        
    def blitme(self):
        """在指定位置绘制猫头鹰"""
        self.screen.blit(self.image, self.rect)