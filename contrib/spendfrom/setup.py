from distutils.core import setup
setup(name='SKXspendfrom',
      version='1.0',
      description='Command-line utility for skyrus "coin control"',
      author='Gavin Andresen',
      author_email='gavin@skyrusfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
