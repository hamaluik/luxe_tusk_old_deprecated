# tŭsk
A game engine built on top of snõw (https://github.com/underscorediscovery/snow)

[![License](https://img.shields.io/badge/license-MIT-blue.svg?style=flat-square)](https://raw.githubusercontent.com/BlazingMammothGames/tusk/master/LICENSE) [![Build Status](https://img.shields.io/travis/BlazingMammothGames/tusk.svg?style=flat-square)](https://travis-ci.org/BlazingMammothGames/tusk)

## Documentation

tŭsk is my personal game engine using [snõwkit](http://snowkit.org/). It takes on the same role as [luxe](http://luxeengine.com/) but provides a more bare-bones rendering API and has a strict [entity-component-system](https://en.wikipedia.org/wiki/Entity_component_system) (ECS) architecture:

* entities are defined solely by the components that compose them
* components are **data only**
* processors ('systems') operate on entities and components appropriately

Since I think the term 'system' isn't quite right here (it implies more than what they are), in tŭsk I use the term 'processor'—processors process entities by examining and altering their components. I like this approach to ECS instead of the approach used by [luxe](http://luxeengine.com/)  and [Unity](http://unity3d.com/) (where components process themselves) as it provides a clean delineation between data and behaviour and allows more emergent behaviour for essentially free. It also allows defining games as data (provided the processors are defined in code) which enables rapid development and iteration.

The engine is still very much under development. Stay tuned for samples!

### API

Auto-generated up-to-date documentation can be accessed here: http://blazingmammothgames.github.io/tusk/

## Planned Features

- [x] Entity-Component-Processor Model
- [x] Event System
    - [x] Macro-based automatic event routing for `Scene` class children
    - [x] Macro-based automatic event routing for `Processor` class children
- [ ] Enhanced Logging
    - [x] Coloured browser console logs
    - [ ] Coloured terminal logs for supported terminals
    - [ ] Formatted file logs
    - [ ] Log state (à la [loguru](https://github.com/emilk/loguru))
- [ ] Macro-Based Profiling?
- [ ] Macro-Based Developer Console?
- [ ] Macro-Based Scene / Entity / Component inspector system (à la Unity)
- [ ] Macro-Based Game Saving / Loading
    - [x] Serialization
    - [ ] Unserialization
    - [ ] File saving
    - [ ] File loading
- [x] Flexible Rendering
    - [x] Material system
- [x] Asynchronous File Loader
- [ ] Easy-to-use "loading" screen
- [ ] Optional (But Commonly Used) Libraries
    - [ ] Post-processing shaders / effects
    - [ ] Tweening / Easing
    - [ ] [Tiled](http://www.mapeditor.org/) level loading
    - [ ] 3D model loading
    - [ ] Collision detection
    - [x] Standard component library
    - [x] Standard processor library
- [x] Thorough documentation
- [ ] Workable samples
- [ ] Think of more features!

## Contributing

Issues, forks, and pull requests are gladly welcomed!