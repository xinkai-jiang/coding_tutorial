'''
Author: your name
Date: 2021-05-21 11:18:02
LastEditTime: 2021-05-21 11:55:13
LastEditors: Please set LastEditors
Description: In User Settings Edit
FilePath: \debug_diary\script\diary\diary.py
'''

import os


class DiaryFile(object):
    
    '''
    @description: 
    @param {*} self
    @param {*} diary_file
    @return {*}
    '''
    def __init__(self, diary_file):
        if diary_file is None:
            raise IOError
    
    @staticmethod
    def create_new_log(diary_name):
        
        os.createLog("".join(diary_name, ".md"))
        
    def check_log(self):
        pass

    def change_name(self, new_name):
        pass

    def 

class Log(object):

    def __init__(self, diary_file):
        self.f = open()
        