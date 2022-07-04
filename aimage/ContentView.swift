//
//  ContentView.swift
//  aimage
//
//  Created by Base64== on 7/2/22.
//

import SwiftUI


struct ContentView: View {
    var body: some View {
      VStack {
        HStack {
          Text("Aimage")
          Button {
            // TODO: Settings here
          } label: {
            
          }

        }

      }.onAppear(perform: download_clip)
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
      ContentView()
    }
}
