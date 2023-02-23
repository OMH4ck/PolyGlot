library(graphics)
library(grDevices)
library(cairoDevice)

# The following setups work fine - 

png(file="test-png.png",width=7.5, height=10, units="in", res=300)

tiff(file="test-tiff.tif",width=7.5, height=10, units="in", res=300)

bmp(file="test-bmp.bmp",width=7.5, height=10, units="in")

jpeg(file="test-jpg.jpg",width=7.5, height=10, units="in", res=300)

postscript(file="test-ps.ps",width=7.5, height=10)

pdf(file="test-pdf.pdf",width=7.5, height=10)

#
# The following device setups crash RGui or R module and hang. 
#       (Typical crash vectors listed belows.)

cairo_ps(filename="test-cairo-ps.ps",width=7.5, height=10)

cairo_pdf(filename="test-cairo-pdf.pdf", width=7.5, height=10)

svg(filename="Test-SVG.svg",width=7.5,height=10)



## code following each device setup call.

ID.width <- strwidth("Just a String")    # returns error message since units="usr"

ID.width <- strwidth("Just a String",units="figure")

ID.width <- strwidth("Just a String",units="inches")

dev.off()
