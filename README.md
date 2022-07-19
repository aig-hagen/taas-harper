# taas-harper v2. (2020-10-02)
Matthias Thimm (matthias.thimm@fernuni-hagen.de)

In order to compile taas-harper you need glib 2.0 header files
(https://developer.gnome.org/glib/).

Then compile taas-harper via
```
    gcc taas-harper.c `pkg-config --cflags --libs glib-2.0` -o taas-harper
```
taas-harper uses a probo-compliant command line interface, see also
http://argumentationcompetition.org/2015/iccma15notes_v3.pdf.

taas-harper implements the problems [SE-GR,EE-GR,DC-GR,DS-GR,SE-CO,DS-CO] and
supports the TGF format for abstract argumentation frameworks. In particular,
to compute the grounded extension of an AAF in TGF format use
```
  taas-harper -p SE-GR -fo TGF -f <file in TGF format>
```
