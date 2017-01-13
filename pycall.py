#!/usr/bin/env python
# -*- coding: utf-8 -*-
import sys

reload(sys)
sys.setdefaultencoding('utf-8')
import ctypes

so = ctypes.cdll.LoadLibrary
lib = so("./libpycallclass.so")
print lib.foo(2, 4)
