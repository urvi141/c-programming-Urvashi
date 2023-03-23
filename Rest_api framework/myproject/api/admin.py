from django.contrib import admin
from .models import *

# Register your models here.

class AdminStudent(admin.ModelAdmin):
    list_display = ('id','name','email','city')
    list_display = ('name',)
   # list_editable = ('city',)
    list_filter = ('city',)
    search_fields = ('name',)
    list_per_page = 2




admin.site.register(Student,AdminStudent)