# Generated by Django 4.1.6 on 2023-02-13 09:31

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('societymemberapp', '0001_initial'),
    ]

    operations = [
        migrations.DeleteModel(
            name='Societymember',
        ),
        migrations.DeleteModel(
            name='User',
        ),
    ]
