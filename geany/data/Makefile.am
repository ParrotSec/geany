
colorschemes = \
	colorschemes/tinge.conf \
	colorschemes/spyder-dark.conf \
	colorschemes/00frozenbox.conf \
	colorschemes/solarized-light.conf \
	colorschemes/mc.conf \
	colorschemes/vibrant-ink.conf \
	colorschemes/fluffy.conf \
	colorschemes/himbeere.conf \
	colorschemes/inkpot.conf \
	colorschemes/alt.conf \
	colorschemes/ubuntu.conf \
	colorschemes/retro.conf \
	colorschemes/darcula.conf \
	colorschemes/pygments.conf \
	colorschemes/notepad-plus-plus.conf \
	colorschemes/dark.conf \
	colorschemes/slushpoppies.conf \
	colorschemes/solarized-dark.conf \
	colorschemes/metallic-bottle.conf \
	colorschemes/railcasts2.conf \
	colorschemes/monokai.conf \
	colorschemes/tango-dark.conf \
	colorschemes/sleepy-pastel.conf \
	colorschemes/black.conf \
	colorschemes/oblivion2.conf \
	colorschemes/kugel.conf \
	colorschemes/tango-light.conf \
	colorschemes/bespin.conf \
	colorschemes/github.conf \
	colorschemes/zenburn.conf \
	colorschemes/dark-fruit-salad.conf \
	colorschemes/steampunk.conf \
	colorschemes/gedit.conf \
	
filetypes = \
	filedefs/filetypes.abaqus \
	filedefs/filetypes.abc \
	filedefs/filetypes.actionscript \
	filedefs/filetypes.ada \
	filedefs/filetypes.asciidoc \
	filedefs/filetypes.asm \
	filedefs/filetypes.batch \
	filedefs/filetypes.c \
	filedefs/filetypes.caml \
	filedefs/filetypes.Clojure.conf \
	filedefs/filetypes.cmake \
	filedefs/filetypes.cobol \
	filedefs/filetypes.coffeescript \
	filedefs/filetypes.common \
	filedefs/filetypes.conf \
	filedefs/filetypes.cpp \
	filedefs/filetypes.cs \
	filedefs/filetypes.css \
	filedefs/filetypes.CUDA.conf \
	filedefs/filetypes.Cython.conf \
	filedefs/filetypes.d \
	filedefs/filetypes.diff \
	filedefs/filetypes.docbook \
	filedefs/filetypes.erlang \
	filedefs/filetypes.f77 \
	filedefs/filetypes.ferite \
	filedefs/filetypes.forth \
	filedefs/filetypes.fortran \
	filedefs/filetypes.freebasic \
	filedefs/filetypes.Genie.conf \
	filedefs/filetypes.glsl \
	filedefs/filetypes.go \
	filedefs/filetypes.Graphviz.conf \
	filedefs/filetypes.haskell \
	filedefs/filetypes.haxe \
	filedefs/filetypes.html \
	filedefs/filetypes.java \
	filedefs/filetypes.javascript \
	filedefs/filetypes.JSON.conf \
	filedefs/filetypes.latex \
	filedefs/filetypes.lisp \
	filedefs/filetypes.lua \
	filedefs/filetypes.makefile \
	filedefs/filetypes.markdown \
	filedefs/filetypes.matlab \
	filedefs/filetypes.nsis \
	filedefs/filetypes.objectivec \
	filedefs/filetypes.pascal \
	filedefs/filetypes.perl \
	filedefs/filetypes.php \
	filedefs/filetypes.po \
	filedefs/filetypes.powershell \
	filedefs/filetypes.python \
	filedefs/filetypes.r \
	filedefs/filetypes.restructuredtext \
	filedefs/filetypes.ruby \
	filedefs/filetypes.rust \
	filedefs/filetypes.Scala.conf \
	filedefs/filetypes.sh \
	filedefs/filetypes.sql \
	filedefs/filetypes.tcl \
	filedefs/filetypes.txt2tags \
	filedefs/filetypes.vala \
	filedefs/filetypes.verilog \
	filedefs/filetypes.vhdl \
	filedefs/filetypes.xml \
	filedefs/filetypes.yaml \
	filedefs/filetypes.zephir

tagfiles = \
	tags/std99.c.tags \
	tags/std.php.tags \
	tags/std.py.tags \
	tags/std.pas.tags \
	tags/entities.html.tags

template_files = \
	templates/files/program.pas \
	templates/files/perlModule.pm \
	templates/files/file_html5.html \
	templates/files/style.css \
	templates/files/file.html \
	templates/files/falcon.fal \
	templates/files/main.java \
	templates/files/file.tex \
	templates/files/file.php \
	templates/files/ruby.rb \
	templates/files/python.py \
	templates/files/bash.sh \
	templates/files/perl.pl \
	templates/files/main.cpp \
	templates/files/main.cxx \
	templates/files/main.vala \
	templates/files/main.c \
	templates/files/file.rb \
	templates/files/main.py \
	templates/files/main.rs \
	templates/files/pascal.pas \
	templates/files/main.d \
	templates/files/module.erl

templates = \
	templates/bsd \
	templates/changelog \
	templates/fileheader \
	templates/function \
	templates/gpl

nobase_dist_pkgdata_DATA = \
	$(colorschemes) \
	$(filetypes) \
	$(tagfiles) \
	$(template_files) \
	$(templates) \
	filetype_extensions.conf \
	snippets.conf \
	ui_toolbar.xml \
	geany.glade

if GTK3
nobase_dist_pkgdata_DATA += \
	geany-3.0.css \
	geany-3.20.css \
	geany.css
else
nobase_dist_pkgdata_DATA += geany.gtkrc
endif

