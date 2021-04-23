from PIL import Image, ImageDraw

TARGET = "D:\\uidq2886\\Desktop\\python\\pic\\1.png"

def round_corner(radius, fill):
    """Draw a round corner"""
    corner = Image.open(TARGET)
    #draw = ImageDraw.Draw(corner)
    #draw.pieslice((0, 0, radius * 2, radius * 2), 180, 270, fill=fill)
    return corner


def round_rectangle(size, radius, fill):
    """Draw a rounded rectangle"""
    width, height = size
    rectangle = Image.open(TARGET)
    corner = round_corner(radius, fill)
    #rectangle.paste(corner, (0, 0))
    # Rotate the corner and paste it
    rectangle.crop(corner.rotate(90), (0, height - radius))
    #rectangle.paste(corner.rotate(180), (width - radius, height - radius))
    #rectangle.paste(corner.rotate(270), (width - radius, 0))
    return rectangle


img = round_rectangle((50, 50), 10, "yellow")

img.show()
