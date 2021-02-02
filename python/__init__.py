from icecube.load_pybindings import load_pybindings
import icecube.icetray # be nice and pull in our dependencies

icecube.icetray.load('testclasses', False)

load_pybindings(__name__,__path__)

